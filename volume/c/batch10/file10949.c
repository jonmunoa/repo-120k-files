// fichero 10949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10949;

Registro10949 crear_registro10949(int id) {
    Registro10949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
