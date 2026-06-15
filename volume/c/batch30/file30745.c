// fichero 30745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30745;

Registro30745 crear_registro30745(int id) {
    Registro30745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
