// fichero 3821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3821;

Registro3821 crear_registro3821(int id) {
    Registro3821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
