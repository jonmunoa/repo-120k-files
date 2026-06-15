// fichero 11489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11489;

Registro11489 crear_registro11489(int id) {
    Registro11489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
