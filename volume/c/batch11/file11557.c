// fichero 11557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11557;

Registro11557 crear_registro11557(int id) {
    Registro11557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
