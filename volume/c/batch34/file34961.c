// fichero 34961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34961;

Registro34961 crear_registro34961(int id) {
    Registro34961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
