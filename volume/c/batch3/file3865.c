// fichero 3865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3865;

Registro3865 crear_registro3865(int id) {
    Registro3865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
