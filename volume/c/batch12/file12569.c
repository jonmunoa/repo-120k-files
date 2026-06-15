// fichero 12569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12569;

Registro12569 crear_registro12569(int id) {
    Registro12569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
