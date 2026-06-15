// fichero 11193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11193;

Registro11193 crear_registro11193(int id) {
    Registro11193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
