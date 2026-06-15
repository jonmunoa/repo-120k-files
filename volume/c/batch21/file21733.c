// fichero 21733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21733;

Registro21733 crear_registro21733(int id) {
    Registro21733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
