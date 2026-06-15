// fichero 34745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34745;

Registro34745 crear_registro34745(int id) {
    Registro34745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
