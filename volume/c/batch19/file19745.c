// fichero 19745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19745;

Registro19745 crear_registro19745(int id) {
    Registro19745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
