// fichero 6953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6953;

Registro6953 crear_registro6953(int id) {
    Registro6953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
