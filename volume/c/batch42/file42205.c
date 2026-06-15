// fichero 42205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42205;

Registro42205 crear_registro42205(int id) {
    Registro42205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
