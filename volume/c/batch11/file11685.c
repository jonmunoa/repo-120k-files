// fichero 11685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11685;

Registro11685 crear_registro11685(int id) {
    Registro11685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
