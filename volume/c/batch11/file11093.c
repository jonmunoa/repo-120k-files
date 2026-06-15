// fichero 11093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11093;

Registro11093 crear_registro11093(int id) {
    Registro11093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
