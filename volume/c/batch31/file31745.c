// fichero 31745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31745;

Registro31745 crear_registro31745(int id) {
    Registro31745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
