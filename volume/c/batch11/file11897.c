// fichero 11897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11897;

Registro11897 crear_registro11897(int id) {
    Registro11897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
