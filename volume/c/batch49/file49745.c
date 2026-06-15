// fichero 49745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49745;

Registro49745 crear_registro49745(int id) {
    Registro49745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
