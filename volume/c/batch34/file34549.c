// fichero 34549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34549;

Registro34549 crear_registro34549(int id) {
    Registro34549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
