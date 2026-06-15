// fichero 11501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11501;

Registro11501 crear_registro11501(int id) {
    Registro11501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
