// fichero 44905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44905;

Registro44905 crear_registro44905(int id) {
    Registro44905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
