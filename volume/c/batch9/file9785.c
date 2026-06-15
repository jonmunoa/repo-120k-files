// fichero 9785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9785;

Registro9785 crear_registro9785(int id) {
    Registro9785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
