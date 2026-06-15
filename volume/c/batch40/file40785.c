// fichero 40785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40785;

Registro40785 crear_registro40785(int id) {
    Registro40785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
