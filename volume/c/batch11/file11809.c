// fichero 11809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11809;

Registro11809 crear_registro11809(int id) {
    Registro11809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
