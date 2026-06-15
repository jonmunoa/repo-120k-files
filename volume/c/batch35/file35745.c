// fichero 35745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35745;

Registro35745 crear_registro35745(int id) {
    Registro35745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
