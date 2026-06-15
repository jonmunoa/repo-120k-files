// fichero 12785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12785;

Registro12785 crear_registro12785(int id) {
    Registro12785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
