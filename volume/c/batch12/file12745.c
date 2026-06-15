// fichero 12745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12745;

Registro12745 crear_registro12745(int id) {
    Registro12745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
