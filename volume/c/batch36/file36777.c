// fichero 36777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36777;

Registro36777 crear_registro36777(int id) {
    Registro36777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
