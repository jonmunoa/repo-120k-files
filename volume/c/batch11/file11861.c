// fichero 11861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11861;

Registro11861 crear_registro11861(int id) {
    Registro11861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
