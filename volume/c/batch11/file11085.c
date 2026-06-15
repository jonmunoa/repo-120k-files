// fichero 11085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11085;

Registro11085 crear_registro11085(int id) {
    Registro11085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
