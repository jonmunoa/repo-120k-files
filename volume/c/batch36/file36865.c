// fichero 36865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36865;

Registro36865 crear_registro36865(int id) {
    Registro36865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
