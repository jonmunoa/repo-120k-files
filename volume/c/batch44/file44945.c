// fichero 44945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44945;

Registro44945 crear_registro44945(int id) {
    Registro44945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
