// fichero 11345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11345;

Registro11345 crear_registro11345(int id) {
    Registro11345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
