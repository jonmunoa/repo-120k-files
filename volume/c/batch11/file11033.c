// fichero 11033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11033;

Registro11033 crear_registro11033(int id) {
    Registro11033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
