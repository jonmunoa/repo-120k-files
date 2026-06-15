// fichero 11785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11785;

Registro11785 crear_registro11785(int id) {
    Registro11785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
