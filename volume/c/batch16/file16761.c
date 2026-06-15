// fichero 16761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16761;

Registro16761 crear_registro16761(int id) {
    Registro16761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
