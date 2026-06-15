// fichero 11993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11993;

Registro11993 crear_registro11993(int id) {
    Registro11993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
