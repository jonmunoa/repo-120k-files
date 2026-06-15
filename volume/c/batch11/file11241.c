// fichero 11241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11241;

Registro11241 crear_registro11241(int id) {
    Registro11241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
