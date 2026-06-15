// fichero 16897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16897;

Registro16897 crear_registro16897(int id) {
    Registro16897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
