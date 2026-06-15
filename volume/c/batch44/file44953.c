// fichero 44953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44953;

Registro44953 crear_registro44953(int id) {
    Registro44953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
