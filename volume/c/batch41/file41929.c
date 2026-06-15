// fichero 41929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41929;

Registro41929 crear_registro41929(int id) {
    Registro41929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
