// fichero 11365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11365;

Registro11365 crear_registro11365(int id) {
    Registro11365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
