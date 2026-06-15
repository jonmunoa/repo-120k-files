// fichero 29745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29745;

Registro29745 crear_registro29745(int id) {
    Registro29745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
