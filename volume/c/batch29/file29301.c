// fichero 29301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29301;

Registro29301 crear_registro29301(int id) {
    Registro29301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
