// fichero 9745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9745;

Registro9745 crear_registro9745(int id) {
    Registro9745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
