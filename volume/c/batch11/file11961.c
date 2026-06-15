// fichero 11961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11961;

Registro11961 crear_registro11961(int id) {
    Registro11961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
