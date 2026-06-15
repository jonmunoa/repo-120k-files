// fichero 24489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24489;

Registro24489 crear_registro24489(int id) {
    Registro24489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
