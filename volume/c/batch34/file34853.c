// fichero 34853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34853;

Registro34853 crear_registro34853(int id) {
    Registro34853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
