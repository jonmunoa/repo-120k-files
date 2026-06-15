// fichero 47093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47093;

Registro47093 crear_registro47093(int id) {
    Registro47093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
