// fichero 37953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37953;

Registro37953 crear_registro37953(int id) {
    Registro37953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
