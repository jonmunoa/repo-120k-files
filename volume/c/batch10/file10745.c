// fichero 10745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10745;

Registro10745 crear_registro10745(int id) {
    Registro10745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
