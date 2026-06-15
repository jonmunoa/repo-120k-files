// fichero 28953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28953;

Registro28953 crear_registro28953(int id) {
    Registro28953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
