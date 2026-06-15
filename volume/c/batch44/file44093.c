// fichero 44093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44093;

Registro44093 crear_registro44093(int id) {
    Registro44093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
