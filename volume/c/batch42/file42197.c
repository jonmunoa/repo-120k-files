// fichero 42197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42197;

Registro42197 crear_registro42197(int id) {
    Registro42197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
