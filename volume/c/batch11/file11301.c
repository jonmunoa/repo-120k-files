// fichero 11301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11301;

Registro11301 crear_registro11301(int id) {
    Registro11301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
