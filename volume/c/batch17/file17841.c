// fichero 17841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17841;

Registro17841 crear_registro17841(int id) {
    Registro17841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
